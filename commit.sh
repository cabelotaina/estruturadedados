#!/bin/bash


############################################ VARIAVEIS
EMAIL_FROM="git.ine5408@gmail.com"
USERNAME=git.ine5408
PASSWORD=quebragalho0
EMAIL_TO="nhelauro@gmail.com cabelotaina@gmail.com fristtram@gmail.com"
DATE=`date +%Y-%m-%d-%H-%M`
############################################ FUNCOES EMAIL
function sendEmail_exists() {
which sendEmail 1>/dev/null 2>&1
if [ $? -ne 0 ]
then
	echo -e " O programa sendEmail deve ser instalado.\n Digite (como root) 'apt-get install libio-socket-ssl-perl libnet-ssleay-perl sendemail'."
	exit 1
fi
}

function do_sendEmail() {
if [ -z "$SUBJECT" ]
then
	echo "* "
	echo "* Erro ao enviar e-mail (SUBJECT nao definido pelo comando 'git rev-parse')."
	echo "* * *"
	exit 1
fi
if [ -z "$MESSAGE" ]
then
	echo "* "
	echo "* Erro ao enviar e-mail (MESSAGE nao definido pelo comando 'git diff')."
	echo "* * *"
	exit 1
fi
if [ -z "$AUTHOR" ]
then
	echo "* "
	echo "* Erro ao enviar e-mail (AUTHOR nao definido pelo comando 'git diff')."
	echo "* * *"
	exit 1
fi

sendEmail -q -f $EMAIL_FROM -s smtp.gmail.com:587 -xu $USERNAME -xp $PASSWORD -t $EMAIL_TO -o tls=yes -u "$SUBJECT" -m "$MESSAGE"
if [ $? -ne 0 ]
then
	echo "* "
	echo "* Erro ao enviar e-mail (comando sendEmail)."
	echo "* * *"
	exit 1
fi
echo "* "
echo "* ..e-mail enviado com sucesso a: $EMAIL_TO."
echo "* * *"
}
########################################### INICIO DO SCRIPT
sendEmail_exists

while [ -z "$ENTRADA" ]
do
	clear
	echo "* * *"
	echo "* COMMIT "
	echo -n "* Comentario sobre o commit (max 300 caracteres): "
	read -n 300 ENTRADA
done

echo "* Executando 'git commit -m \"$ENTRADA\"'"
git commit -m "$ENTRADA"
if [ $? -ne 0 ]
then
	echo "* "
	echo "* Erro no comando 'git commit', abortando."
	echo "* * *"
	exit 1
fi

echo "* Executando 'git push origin master'"
git push origin master
if [ $? -ne 0 ] 
then
        echo "* "
        echo "* Erro no comando 'git push origin master', abortando."
        echo "* * *"
        exit 1
fi
echo "* "
echo "* Commit feito e enviado para o github.com com sucesso." 
echo "* * *"

echo "* * *"
echo "* Enviando e-mail.."
MESSAGE="$(git diff)"
AUTHOR="$(git diff | grep Author | cut -f2 -d":" | cut -f1 -d"<" | tr -d ' ')"
SUBJECT="$DATE - $AUTHOR - $(git rev-parse HEAD)"

do_sendEmail


#! /bin/bash

message='The lazy dog'
echo $message > example.txt
txt=$(cat example.txt)

echo "Sha256 para o .txt com: $txt"
sha256sum example.txt


message=$message"!"
echo $message > example.txt
txt=$(cat example.txt)

echo $'\n'"Sha256 para o .txt com: $txt"
sha256sum example.txt

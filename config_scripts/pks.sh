#!/bin/sh

PAK=`dpkg --get-selections | grep -v deinstall$ | wc -l`

echo "paquetes='$PAK'"

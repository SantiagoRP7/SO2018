#!/bin/bash
NUMPROCESOS=$(ps ax | tail -n +2 | wc -l)
echo ${NUMPROCESOS}

ESPACIOTOTAL=$(free | grep Mem | awk '{printf $2}')
ESPACIOLIBRE=$(free | grep Mem | awk '{printf $4}')
PORCENTAJELIBRERAM=$(((${ESPACIOLIBRE} * 100) / ${ESPACIOTOTAL}))
echo ${PORCENTAJELIBRERAM}

PORCENTAJEUSADODD=$(df | grep root | awk '{printf $5}' | sed 's/.$//g' )
PORCENTAJEDDLIBRE=$((100 - ${PORCENTAJEUSADODD}))
echo ${PORCENTAJEDDLIBRE}

curl --silent --request POST --header "X-THINGSPEAKAPIKEY:CEO25E8MXPX6HXWP" --data "field1=${NUMPROCESOS}&field2=${PORCENTAJELIBRERAM}&field3=${PORCENTAJEDDLIBRE}" http://api.thingspeak.com/update

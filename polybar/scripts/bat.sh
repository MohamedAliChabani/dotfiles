#!/bin/bash

if [[ $(acpi |tail -n 1| grep -i "Discharging") ]];
then
    sign="-"
else
    sign="+"
fi

bat=$(acpi | tail -n 1 | grep % | cut -d, -f 2)

echo "battery $sign :$bat"

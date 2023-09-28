#!/bin/bash

if [[ $1 == "" ]]
then
    exit
fi

if [[ $1 == "inc" ]]
then
    newgaps=$(echo "$(bspc config window_gap) + 2" | bc)
fi

if [[ $1 == "dec" ]]
then
    newgaps=$(echo "$(bspc config window_gap) - 2" | bc)
fi

if [[ $1 == "del" ]]
then
    newgaps=0
fi

if [[ $1 == "normal" ]]
then
    newgaps=14
fi

bspc config window_gap $(echo $newgaps)

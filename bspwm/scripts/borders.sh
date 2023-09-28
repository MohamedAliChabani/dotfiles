#!/bin/bash

width=$(bspc config border_width)

if [[ $width != "0" ]]
then
    width=0
else
    width=$1
fi

bspc config border_width $(echo $width)

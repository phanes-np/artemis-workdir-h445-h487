#!/bin/env zsh

function usage() {
cat <<EOF
usage: $1 setting_name
usage: $2 user_name
EOF
}

if [ $1_ = _ ] ; then
    usage $0
    exit
fi

dc31_prm_dir="/home/artemis/exp/h445_h487/art_analysis/user/$2/prm/mwdc/dc31/dt2dl"
cd $dc31_prm_dir
if [ -d $1 ] ; then
    echo dc31_prm $1 is current
    rm -f current
    ln -sf $1 current
else
    echo "$dc31_prm_dir/$1 not found."
fi

dc32_prm_dir="/home/artemis/exp/h445_h487/art_analysis/user/$2/prm/mwdc/dc32/dt2dl"
cd $dc32_prm_dir
if [ -d $1 ] ; then
    echo dc32 $1 is current
    rm -f current
    ln -sf $1 current
else
    echo "$dc32_prm_dir/$1 not found."
fi

sr11_prm_dir="/home/artemis/exp/h445_h487/art_analysis/user/$2/prm/srppac/sr11/dq2dx"
cd $sr11_prm_dir
if [ -d $1 ] ; then
    echo sr11_prm $1 is current
    rm -f current
    ln -sf $1 current
else
    echo "$sr11_prm_dir/$1 not found."
fi


cd ../..

#!/bin/bash

workdir=`dirname $0`
cd ${workdir}/../
workdir=`pwd`

bin=${workdir}/bin
libs=${workdir}/libs
conf=${workdir}/conf

export LD_LIBRARY=${libs}:${LD_LIBRARY}

${bin}/simple-cli

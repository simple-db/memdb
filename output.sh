#!/bin/bash

workdir=`dirname $0`
cd ${workdir}
workdir=`pwd`

output_bin=${workdir}/output/bin
output_libs=${workdir}/output/libs
output_conf=${workdir}/output/conf

mkdir -p ${output_bin}
rm -rf ${output_bin}/*
mkdir -p ${output_libs}
rm -rf ${output_libs}/*
mkdir -p ${output_conf}
rm -rf ${output_conf}/*

cp ${workdir}/simple-db ${output_bin}
cp ${workdir}/simple-cli ${output_bin}
cp ${workdir}/scripts/run_db.sh ${output_bin}
cp ${workdir}/scripts/run_cli.sh ${output_bin}

cp ${workdir}/3rd-party/libs/gflags/* ${output_libs}
cp ${workdir}/3rd-party/libs/protobuf/* ${output_libs}

#!/bin/sh
compile() {
  gcc -o "buffer$1" "buffer$1.c"
}

for i in $@; do
  compile "$i"
done

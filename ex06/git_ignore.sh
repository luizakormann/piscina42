#!/bin/sh
lista=$(git status --ignored --short | grep "!!")

echo "$lista"

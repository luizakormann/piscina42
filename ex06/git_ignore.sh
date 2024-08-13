#!/bin/sh
lista=$(git ls-files --others --ignored --exclude-standard)

echo "$lista"

#!/bin/bash
find . -name "*.sh" | awk -F ".sh" '{print $1}'

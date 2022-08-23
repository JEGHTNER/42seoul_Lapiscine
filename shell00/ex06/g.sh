#!/bin/sh
TOP_LEVEL=$(git rev-parse --show-toplevel)
find $TOP_LEVEL -type f -exec basename {} \;|git check-ignore --stdin

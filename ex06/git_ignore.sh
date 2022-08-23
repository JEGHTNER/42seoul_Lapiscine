Top_Level=$(git rev-parse --show-toplevel)
find $Top_Level -type f -exec basename {} \;|git check-ignore --stdin


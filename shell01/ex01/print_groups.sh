id -Gn $FT_USER | sed 's/ /,/g' | xargs printf

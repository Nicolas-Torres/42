cat /etc/passwd | sed '1, 10d' | cut -d ':' -f1 | sed -n 'n;p' | rev | sort -r |sed -n "`echo $FT_LINE1`, `echo $FT_LINE2`p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/, $/./' | tr -d "\n"

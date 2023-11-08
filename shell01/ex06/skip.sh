ls -l | awk ' {print;} NR % 2 == 0 { print ""; }'

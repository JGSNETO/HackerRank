read char

if [ "$char" -eq "Y" || "$char" -eq "y" ]; then
    echo "YES"
else
    echo "NO"

# Read a single character from standard input and store it in variable 'char'
read char

# Start a case statement to match the value of 'char'
case "$char" in
    # If char is 'Y' or 'y'
    [Yy])
        echo "YES"   # Print YES
        ;;           # End of this case block

    # If char is 'N' or 'n'
    [Nn])
        echo "NO"    # Print NO
        ;;           # End of this case block

# End of case statement
esac
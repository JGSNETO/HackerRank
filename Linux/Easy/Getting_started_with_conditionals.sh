read char

if [[ "$char" == "Y" || "$char" == "y" ]]; then
    echo "YES"
elif [[ "$char" == "N" || "$char" == "n" ]]; then
    echo "NO"
fi

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
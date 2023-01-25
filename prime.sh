echo "enter number"
read num
for((i=2; i<=num/2; i++))
do 
 if [ $((num%i)) -eq 0 ]
 then
    echo "$num is a composite number."
    exit
 fi
done
echo "$num is a prime number."


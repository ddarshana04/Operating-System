i = 1
sum = 0
for n in {1...100}
do 
  out $= ($(n%2)
  while [ $out -eq 0 ]
  do
  sum = $((sum + $n))
  i = $(( i+ 1))
done  

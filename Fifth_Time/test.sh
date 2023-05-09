#! /bin/bash
var=`cat files.txt | wc –l`
echo $var

arr[0]=hello
arr[1]=world
echo ${arr[@]}

x=( a b c d )
x[4]=e
echo ${x[@]}

echo *.txt
echo b*
echo b*.txt
echo [bt]*
echo ??.txt

cd ~/Downloads
ls
cd ~/Desktop/CPP_Mentoring/Fifth_Time
if [ 1 -gt 2 ]; then
    echo "1>2"
elif [ 3 -lt 1 ]; then
    echo "3>1"
else
    echo "1 is the smallst nummber"
fi

i=0
while [ $i -lt 5 ]; do
    echo $i
    ((i++))
done

x=( a b c d e)
for l in ${x[@]}; do
    echo $l
done

for w in hello world; do
    echo $w
done
for w in *; do
    echo $w
done


exp=5+3
(( val=5+3 ))
echo $exp=$val

printHello() {
    echo $hello
}
hello="hello world"
printHello

foo() {
    if (( $#> 0 )); then
        echo I got $# parameters. The first is $1
    return 0;
    fi
    return 1
}
foo hello

printAllParameters() {
    if (( $# > 0)); then
        echo $@
    fi
}

printAllParameters hello world my name is dvir

#.bashrc
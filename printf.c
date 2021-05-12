
icho -n "select first station (st1  or st14):"; read station
if [ "$station" = "st1" ]; then
	while [ "$station" != "st5" ];	do
	for station in st1 st2 st3 st4 st5;	do
		echo -n "go (y or Y):";	read opt
 			if [ "$opt" = "y" ] || [ "$opt" = "Y" ]; then
				if [ "$station" = "st5" ]; then
					echo "current station is $station (exit)"
					exit
				else
					echo "current station is $station (stay)"	
				fi
			else
				exit
			fi
	done
	done	
elif [ "$station" = "st14" ]; then
	while [ "$station" = "st14" ];	do
	for station in st14 st13 st12 st11 st10 st9 st8 st7 st6 st5; do
		echo -n "go (y ot Y):";	read opt
			if [ "$opt" == "y" ] || [ "$opt" == "Y" ];	then
				if [ "$station" = "st5" ];	then
				echo "current station is $station (exit)"
				    exit
				else
					echo "current station is $station (stay)"
				fi
			else
				exit
			fi
	done
	done
else
	exit
fi

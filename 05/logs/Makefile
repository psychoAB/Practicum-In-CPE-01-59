all: report.txt

ecourse-ku.txt: ecourse.log
	cut -d' ' -f1 ecourse.log | grep ^158.108 | sort | uniq | wc -l > ecourse-ku.txt

ecourse-notku.txt: ecourse.log
	cut -d' ' -f1 ecourse.log | grep -v ^158.108 | sort | uniq | wc -l > ecourse-notku.txt

elab-ku.txt: elab.log
	cut -d' ' -f1 elab.log | grep ^158.108 | sort | uniq | wc -l > elab-ku.txt

elab-notku.txt: elab.log
	cut -d' ' -f1 elab.log | grep -v ^158.108 | sort | uniq | wc -l > elab-notku.txt

report.txt: ecourse-ku.txt ecourse-notku.txt elab-ku.txt elab-notku.txt
	echo "------------------------------" > report.txt
	echo "Machine      ecourse     elab"  >> report.txt
	echo "------------------------------" >> report.txt
	echo "From KU     `cat ecourse-ku.txt` `cat elab-ku.txt`" >> report.txt
	echo "Not from KU `cat ecourse-notku.txt` `cat elab-notku.txt`" >> report.txt
	echo "------------------------------" >> report.txt

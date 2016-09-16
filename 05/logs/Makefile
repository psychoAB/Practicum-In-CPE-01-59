all: report.txt

ecourse-ku.txt: ecourse.log
	    cut -d' ' -f1 ecourse.log | grep ^158.108 | sort | uniq | wc -l > ecourse-ku.txt

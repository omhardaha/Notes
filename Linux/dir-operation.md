- `-r` flag means recursive.


**Copy File** -  `cp filename dir_name/new_file_name`.
```
cp ./file_name ./dir_name
```
**Copy Dir**  -  `cp dir_name dest_dir_name`
``` 
cp -r ./test ./folder
```
**Move File and Dir** -
```
mv file_name dir_name 

mv dir_name dest_name
```
**Delete File and Dir** -
```
rm file_name // delete file

rm -r dir_name // delete dir.

rmdir dir_name // delete Empty Dir
```
**Download File** -
```
wget [url] // download file in current dir

wget -o dir_name [url] // download file in given dir_name
```
```
curl [url] > file_name // download file with file_name
```
**Zip Files** -
```
zip file_name.zip file.txt file2.txt file3.txt // zip mulptiple file

zip -r file_name.zip <directory> // zip whole dir

unzip file_name.zip // exact files

zip -e file_name.zip file.txt // zip with pw

zip -sf file_name.zip // show zip file content
```
**Search Files and Dir** -
`find [directory] [OPTIONS] [EXPRESSION]`
```
➜  find . -name "*.txt" // find all text files in current dir

➜  find -type d -name "download" // will show the directory of download folder

```
https://www.redhat.com/sysadmin/linux-find-command
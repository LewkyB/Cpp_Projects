# Cpp_Projects

## Note_Maker
I wanted to automate the process of making the "skeleton" of my notes. This was meant to work only using WSL in Windows 10. 

I organize my notes with sections (exam, quiz, assignment 1 questions). 

<img src="https://i.postimg.cc/yNhFsqXJ/image.png" width=40% />

Copy note_maker into notes directory and `$ ./note_maker section1 section2 section3` will 
1. create a file named MM_DD_YY.txt in current directory
2. write the sections into the text file
3. using `C:\Program Files (x86)\Notepad++\notepad++.exe` open the file that was just created

<img src="https://i.postimg.cc/dtnjpZmb/image.png" width=40% />

I decided to make an alias for quick note making:
* `alias databasenotes="cd /databases/notes && ./note_maker"`
* then use `$ databasenotes section1 section2 section3` to create note file

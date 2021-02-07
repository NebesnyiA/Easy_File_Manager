EFM (QT-Edition)

Easy file manager - is a simple file explorer, which is based on Total Commander, and is written
in C++ programing language with the eldements of QMake.
It provides usual for every user functions, brings simple and understandable interface.
Interface consists of five elements: two windows, exit button and two menu bars.
Windows are used to move through the directories and open the files. Also it is used to get the 
file path for the functions. If the user have a desire to move to the previous directory, he can 
press on ".." (dotdot). If the user wants to change the disk, he can use "." to move to the root 
dir. To open the media-file, exe-file, image or text-file, the user must click double on it.

To make some actions with the file, the user must open one of the menu bars. Left is for the
first window, right is for the second one. Menu bar provides such actions like: Copy the file,
New File, New Folder, Rename, Remove, Move.

New File - if the user presses this action, the dialog will be opened. In that dialog the user 
must enter the name of the file. If he press cancel or leave the Input empty, the file will
not be created. If he entered the name, new field would be opened. There the user must choose
the format of the file. If he wants to cancel the creation at this stage, he must choose an 
empty input variant. If the file with such name exists, the user will get an error message
"Error! There is the file with such name!"

Remove - the user can remove the file or the folder, which has been chosen by him in the window.
This version of programe does not provide a possibility to remove the folders with file inside 
and save the files in the garbage can.

Rename - user chooses the file in the window and presses Rename action. At that moment he gets 
the message box with a possibility to enter the new name of the file or folder. If the file
with such name already exists, the user will get an error message and the file will not be
renamed.

Move - user must choose the file or folder in the window and then press Move action. This action
provides the possibility to move the folders with files. If the user wants to move the object, he
must choose its future location in the second window.

Copy - to copy the file, the user must choose this file in the first window and set the location
of its copy in the second one. If the file with the name of the copy (original) exists in that
folder, the user will get the message "File with such name exists. That file will be overwritten."

New Folder - user can create new folder, but firstly he must choose its future location in the
window. If the folder with such name exists, new folder will not be created.

All this actions are useable for the second window, but the user must choose the file int the 
second window and future location of copies or moved files (dirs) in the first one.

To close the file manager, the user must press "Exit" button.


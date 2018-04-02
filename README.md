# FileExfiltration
A modification of Hak5's method of File exfiltration, using an Arduino Pro Micro instead of a rubber ducky


Really, the only thing I did was convert the few lines of duckyscript over to arduino code. All of the credit for the code behind this goes out to @hak5darren and the Hak5 team for developing the payload and tearing their hair out dealing with DOS. 


If you want to check it out, [here's Hak5's writeup of the whole process.](https://www.hak5.org/blog/main-blog/stealing-files-with-the-usb-rubber-ducky-usb-exfiltration-explained) 

## How do I use it?
<<<<<<< HEAD
 - Image the FileEfiltrate.ino file to an arduino with keyboard compatibility, (I recommend the pro micro for its size, but a leonardo will work as well) and copy the other files to a usb stick. 
 - Rename your usb drive to \'\_\', without the quotes. 
 That's it. All that's left is to modify the files a bit, and copy them over to a victim computer. 

 If you want to add more types of files to extract, take a look inside `e.cmd`. Take the line `xcopy /C /Q /G /Y /S %USERPROFILE%\Documents\*.txt %dst% >>nul` and copy it right below, and then change `*.txt` to `*.docx` or whatever kind of file type you want to extract. I already added an extra line so that it copies all text files, but you can remove that if you'd like. The base program only copied pdfs, and while that's useful, I find that people also store important stuff in text files. 
=======
You image the FileExfiltrate.ino file to an arduino with keyboard compatibility, (I recommend the pro micro for its size, but a leonardo will work as well) and copy the other files to a usb stick. Rename your usb drive to \'\_\', without the quotes. That's it. All that's left is to modify the files a bit, and copy them over to a victim computer
>>>>>>> b2b1748f54950e97f6e025ddf0ffae77cc666c22

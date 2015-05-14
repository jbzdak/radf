**R**andom **A**ccess **D**ata **F**ormat 
=========================================

I need a file format that hsa following properties: 

* A tar like format that allows me to compress directory
* Is random access. I can read archive contents without reading the whole file
 
 * I can get a memmap pointer to a file entry
 
* Has good python bindings
 
Nice to have features

* Format be streamed with reasonable performance
 
There are some alternatives: 

* ``tar`` is not random access
* ``tar`` + ``tarindex`` is nice, but I'd rather have it in single file 
* ``dar`` is backup orientend and probably is to complicated to my needs. 


Disclaimer
==========

Do not use it. It is not production quality code
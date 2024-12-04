# File Management API

## Capabilities
- Upload file
- Delete file
- Read file

# Jobs
## General
```
client -> <method>
device -> ready
```
## Upload File
```
client -> <file name>
device -> data_send
client -> <file data>
```

## Delete file
```
delete <file name>
```

## Read file
```
client -> <file name>
device -> DATA
```
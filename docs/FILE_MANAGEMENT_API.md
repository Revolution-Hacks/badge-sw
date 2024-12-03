# File Management API

## Capabilities
- Upload file
- Delete file

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
device -> ack
client -> <CRC checksum>
device -> Success | Error
```

## Delete file
```
delete <file name>
device -> ack
```
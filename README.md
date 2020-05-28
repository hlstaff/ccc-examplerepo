[email address]

# Challenge Title
This is an example of how challenge submissions should be structured.

## Flag
Flag: exampleFlag18291

## Briefing
Download the files at [url] and use them to access the network service on [ip] port: [port] to get the flag.

By [username].

## Infrastructure
What infrastructure is necessary to make your challenge function?
What is the technology stack? PHP? React? Docker?
What libraries are required?
Is the binary 32 bit or 64 bit?

- Host the download files.
- Host the binary as a TCP network service with a wrapper that listens on STDIN and STDOUT.

## Risks
What is risky about the challenge? The CTF is going to be out on the open internet, is there anything which might cause the box to be compromised? If your challenge achieves remote code execution, can the flag file be modified by a user? What mitigations do you have in mind to prevent this? For example:

There is a risk that the binary contains an accidental buffer overflow, I have tried to make sure there is no chance of this by restricting the amount of user input in the code.

## Walkthrough
Provide detailed step by step instructions on how to solve the challenge including exactly what to send or input to get the flag.

If a walkthrough is not reasonable for the challenge then provide a solution script instead.

For example:

The student will reverse engineer the binary download using something like Binary Ninja or Ghidra or strings.

The student should recognise that the binary accepts a password input of `badpass123` and when this is submitted the binary will respond with the flag.

The flag is not in the local version of the binary, only the remote version has the real flag so the student must then submit the discovered password to the network service using something like netcat:

`nc <ip> <port>`

and then send `badpass123` to get the flag.
# Author: Akhil Bhansali
# Date: October 8 2019
 
This is a help file for the gittraining repository.
The gittraining repository is created to help individuals to learn basic set of git commands.

The requirements are:
1. Download git client to your local machine.
https://git-scm.com/downloads

Download and install appropriate version as per your operating system.

***** This readme is written with reference to MacOS *****

2. Open terminal and type in following.

Command Prompt #> which git
/usr/local/bin/git

Command Prompt #> git --version
git version 2.22.0

Command Prompt #> git init
Command Prompt #> git add
Command Prompt #> git commit
Command Prompt #> git push
Command Prompt #> git status
Command Prompt #> git log
Command Prompt #> git pull
Command Prompt #> git remote add origin <git repository url>
Command Prompt #> git stash
Command Prompt #> git branch
Command Prompt #> git merge
Command Prompt #> git revert
Command Prompt #> git cherry-pick

**** Docker Commands ****
Docker subsystem has multiple components.
1. Docker Client : Installed on the client machine e.g. Windows / Linux / MacOS
2. Docker Daemon : Background process talking to docker client running on client machine
3. Docker Hub : A remote repository configured for docker daemon to look for Docker Images
4. Dicker Images : A docker image is an instance of application abstraction / os abstration.
5. Docker Container : A running instance of a docker image on a client machine.


Command Prompt #> docker container run hello-world
This pulls "hello-world" image from Docker hub and runs it locally on a docker engine as a separate container.

Command Prompt #> docker container run -it alpine /bin/sh
Run alpine container in an interactive mode with shell prompt appearing.

Command Prompt #> docker search



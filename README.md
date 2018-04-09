# hello-world
Test repository

issue-1
issue-1-1
issue-1-1 (other ch)

# Git notes

## Initial download
Current folder:
`git clone https://github.com/mathieugouin/hello-world.git .`

New folder:
`git clone https://github.com/mathieugouin/hello-world.git new-folder`

## Modifs
Check what changed:
`git status`

Add to staging:
`git add <filename>`

Commit to local repo:
`git commit -m "commit message"`

Simultaneous add & commit to local repo:
`git commit -a -m "commit message"`

Push local repo to remote repo (server):
`git push <remote-name> <branch-name>`  Example: `git push origin master`

## Branch
List all:
`git branch -a`

Create new branch:
`git branch <branch-name>`

Switch to branch:
`git checkout <branch-name>`

Set upstream:
`git branch --set-upstream-to=origin/<branch> master`

## Remote
`git pull <remote> <branch>`

`git remote -v`

## Log
`git log --oneline --decorate --graph --all`

## Syncing fork
`git fetch upstream`

`git checkout master`

`git merge upstream/master`

push...

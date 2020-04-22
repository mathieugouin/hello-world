# Git notes

## Initial download
Current folder:
`git clone https://github.com/mathieugouin/hello-world.git .`

New folder:
`git clone https://github.com/mathieugouin/hello-world.git new-folder`

## Modifs
Check what changed:
`git status`

Check what changed (simple view):
`git status -s`

Add to staging:
`git add <filename>`

Commit to local repo:
`git commit -m "commit message"`

Simultaneous auto add all changed files & commit to local repo:
`git commit -a -m "commit message"`

Push local repo to remote repo (server):
`git push <remote-name> <branch-name>`  Example: `git push origin master`

Retrieve changes done by others:
`git pull`

## Revert
Revert local changes
`git reset --hard`

Revert last commit
`git reset --soft HEAD~1`

## Branch
List:
`git branch`

List all:
`git branch -a`

Create new branch:
`git branch <branch-name>`

Create new branch from another branch:
`git branch <branch-name> <other-branch-name>`

Create new branch + switch to it:
`git checkout -b <branch-name>`

Checkout a new local branch tracking a remote:
`git checkout --track origin/<branch-name>`

Switch to branch:
`git checkout <branch-name>`

Retrieve all remotes branch
`git fetch origin`

Set upstream:
`git branch --set-upstream-to=origin/<branch> master`

## Tag
List all tag
`git tag`

Create a new annotated tag + message
`git tag -a -m "Tag message" TAG_NAME`

Push specific tag
`git push origin TAG_NAME`

Push all tags
`git push --tags`

## Diff
Diff between 2 branches
`git diff branchA branchB`

Diff between 2 branches, single file
`git diff branchA branchB -- file.c`

## Remote
List all remote
`git remote -v`

Add new remote
`git remote add upstream https://github.com/ORIGINAL_OWNER/ORIGINAL_REPOSITORY.git`

## Log
Nice & Pretty log: `git log --oneline --decorate --graph --all`

## Syncing fork
* `git fetch upstream`
* `git checkout master`
* `git merge upstream/master`
* `git push origin master`

## Submodules
https://chrisjean.com/git-submodules-adding-using-removing-and-updating/


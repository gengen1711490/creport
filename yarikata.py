レポートの上げ方
s1711490@7C102-P044:~/creport$ git add .
s1711490@7C102-P044:~/creport$ git commit -m "aa"
s1711490@7C102-P044:~/creport$ git push




s1711490@7C103-P097:~$ ls
20170407.flg  Pictures	     ip		 soft2	       ドキュメント
AppData       Saved Games    old1.mozc	 stat_work     ビデオ
BIBLAS	      Searches	     old2.mozc	 test.db       ピクチャ
Contacts      Start Menu     pro	 texput.log    ミュージック
Desktop       Videos	     progI	 userlist      公開
Documents     WINDOWS	     progII	 www	       情報(実習)4.odt
Downloads     cintro	     projects	 wwws	       名刺①.lcx
Favorites     cje	     result	 yarikata.odt
Links	      dbintro	     soft	 ダウンロード
Music	      exercise.tex~  soft1.html  テンプレート
s1711490@7C103-P097:~$ mkdir creport
s1711490@7C103-P097:~$ cd creport
s1711490@7C103-P097:~/creport$ ls ..
20170407.flg  Pictures	   exercise.tex~  soft1.html	テンプレート
AppData       Saved Games  ip		  soft2		ドキュメント
BIBLAS	      Searches	   old1.mozc	  stat_work	ビデオ
Contacts      Start Menu   old2.mozc	  test.db	ピクチャ
Desktop       Videos	   pro		  texput.log	ミュージック
Documents     WINDOWS	   progI	  userlist	公開
Downloads     cintro	   progII	  www		情報(実習)4.odt
Favorites     cje	   projects	  wwws		名刺①.lcx
Links	      creport	   result	  yarikata.odt
Music	      dbintro	   soft		  ダウンロード
s1711490@7C103-P097:~/creport$ ls ../cintro
README.md	  goods.txt  sample1-1.c  sample1-5.c  sample2-2.c  sample4-1.c
array_by_macro.c  junk.txt   sample1-2.c  sample1-6.c  sample3-1.c
ascii.c		  macro.c    sample1-3.c  sample1-7.c  sample3-2.c
english.txt	  names.txt  sample1-4.c  sample2-1.c  sample3-3.c
s1711490@7C103-P097:~/creport$ cp ../cintro/* .
s1711490@7C103-P097:~/creport$ atom .gitignore
s1711490@7C103-P097:~/creport$ git init
Initialized empty Git repository in /home/s1711490/creport/.git/
s1711490@7C103-P097:~/creport$ git add
Nothing specified, nothing added.
Maybe you wanted to say 'git add .'?
s1711490@7C103-P097:~/creport$ git add .
s1711490@7C103-P097:~/creport$ git commit -m "samples"
[master (root-commit) 9c23366] samples
 9 files changed, 33 insertions(+)
 create mode 100644 .gitignore
 create mode 100644 README.md
 create mode 100644 array_by_macro.c
 create mode 100644 ascii.c
 create mode 100755 english.txt
 create mode 100755 goods.txt
 create mode 100644 junk.txt
 create mode 100644 macro.c
 create mode 100755 names.txt
s1711490@7C103-P097:~/creport$ git remote add origin git@github.com:gengen1711490/creport.git
s1711490@7C103-P097:~/creport$ git push -u origin master
Counting objects: 11, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (7/7), done.
Writing objects: 100% (11/11), 1.14 KiB | 0 bytes/s, done.
Total 11 (delta 0), reused 0 (delta 0)
remote:
remote: Create a pull request for 'master' on GitHub by visiting:
remote:      https://github.com/gengen1711490/creport/pull/new/master
remote:
To git@github.com:gengen1711490/creport.git
 * [new branch]      master -> master
Branch master set up to track remote branch master from origin.
s1711490@7C103-P097:~/creport$ atom sample1-4.c
s1711490@7C103-P097:~/creport$ git add .
s1711490@7C103-P097:~/creport$ git commit -m "solved a problem"
[master 16fbe32] solved a problem
 1 file changed, 10 insertions(+)
 create mode 100644 prob4.c
s1711490@7C103-P097:~/creport$ git push
warning: push.default is unset; its implicit value has changed in
Git 2.0 from 'matching' to 'simple'. To squelch this message
and maintain the traditional behavior, use:

  git config --global push.default matching

To squelch this message and adopt the new behavior now, use:

  git config --global push.default simple

When push.default is set to 'matching', git will push local branches
to the remote branches that already exist with the same name.

Since Git 2.0, Git defaults to the more conservative 'simple'
behavior, which only pushes the current branch to the corresponding
remote branch that 'git pull' uses to update the current branch.

See 'git help config' and search for 'push.default' for further information.
(the 'simple' mode was introduced in Git 1.7.11. Use the similar mode
'current' instead of 'simple' if you sometimes use older versions of Git)

Counting objects: 3, done.
Delta compression using up to 4 threads.
Compressing objects: 100% (3/3), done.
Writing objects: 100% (3/3), 372 bytes | 0 bytes/s, done.
Total 3 (delta 1), reused 0 (delta 0)
remote: Resolving deltas: 100% (1/1), completed with 1 local object.
To git@github.com:gengen1711490/creport.git
   9c23366..16fbe32  master -> master
s1711490@7C103-P097:~/creport$ gcc prob4.c
prob4.c: In function ‘main’:
prob4.c:10:1: error: expected declaration or statement at end of input
 }
 ^
s1711490@7C103-P097:~/creport$ gcc prob4.c
s1711490@7C103-P097:~/creport$ ./a.out
s1711490@7C103-P097:~/creport$ gcc -o prob4 prob4.c
prob4.c: In function ‘main’:
prob4.c:8:1: error: expected ‘;’ before ‘}’ token
 }
 ^
s1711490@7C103-P097:~/creport$ gcc -o prob4 prob4.c
s1711490@7C103-P097:~/creport$ ./prob4
hello!!!hello!!!hello!!!hello!!!hello!!!hello!!!hello!!!hello!!!hello!!!hello!!!
s1711490@7C103-P097:~/creport$

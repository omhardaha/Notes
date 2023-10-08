## Do Below Things To Setup

### 1. Update the Ubuntu
``` 
sudo apt update
```

### 2. Installation Of ZSH
``` 
sudo apt install zsh -y
```

### 3. Installation Of OHMYZSH
``` 
sh -c "$(curl -fsSL https://raw.githubusercontent.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
```

4
``` 
git clone https://github.com/spaceship-prompt/spaceship-prompt "$ZSH_CUSTOM/themes/spaceship-prompt" --depth=1
```

5
``` 
ln -s "$ZSH_CUSTOM/themes/spaceship-prompt/spaceship.zsh-theme" "$ZSH_CUSTOM/themes/spaceship.zsh-theme" 
```

### 6. Install the Font
``` 
install mononoki fonts from nerdfonts https://www.nerdfonts.com/font-downloads
```

### 7. Open .zshrc file Edit Change Code
``` 
code ~/.zshrc
```
```
#Put this on the bottom of file (zshrc)
SPACESHIP_PROMPT_ADD_NEWLINE="true" 
SPACESHIP_CHAR_SYMBOL=" \uf0e7" 
#SPACESHIP_CHAR_PREFIX="\uf296" 
SPACESHIP_CHAR_SUFFIX=(" ") 
SPACESHIP_CHAR_COLOR_SUCCESS="yellow" 
SPACESHIP_PROMPT_DEFAULT_PREFIX="$USER" 
SPACESHIP_PROMPT_FIRST_PREFIX_SHOW="true" 
SPACESHIP_USER_SHOW="true"

export LS_COLORS="di=34;40:ln=36;40:so=35;40:pi=33;40:ex=32;40:bd=1;33;40:cd=1;33;40:su=0;41:sg=0;43:tw=0;42:ow=34;40:"
zstyle ':completion:*:default' list-colors ${(s.:.)LS_COLORS}
```


8
``` 
Edit Windows terminal settings example https://github.com/codingphasedotcom/...
```

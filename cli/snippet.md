## cli for making HTML templets

.bashprofile

```bash
html-new() {
    mkdir -vp "$1"/{no-framework-css/{src,assets/{css,fonts,images,js}},no-framework-scss/{src,assets/{css,fonts,image,js}},with-bootstrap/{src,assets/{css,fonts,images,js}},with-taiwind/{src,assets/{css,fonts,images,js}}}
    touch "$1"/no-framework-css/src/index.html
    touch "$1"/no-framework-scss/src/index.html
    touch "$1"/with-bootstrap/src/index.html
    touch "$1"/with-taiwind/src/index.html
}
```

# Maintainer: Leonardo Hernández <leohdz172@outlook.com>
pkgname=dmenu
pkgver=5.0
pkgrel=1
pkgdesc="A dynamic menu for X"
url="https://github.com/Sevz17/dmenu.git"
arch=('x86_64')
license=('MIT')
depends=('zsh' 'glibc' 'coreutils' 'libxinerama' 'libxft' 'libx11' 'freetype2' 'fontconfig' 'libfontconfig.so')
provides=("dmenu" "stest")
conflicts=("dmenu")
source=("$pkgname-$pkgver.tar.gz")
sha256sums=('SKIP')

build() {
  cd "$srcdir/$pkgname"
  make
}

package() {
  cd "$srcdir/$pkgname"
  make PREFIX=/usr DESTDIR="$pkgdir" install
  install -m644 -D LICENSE "$pkgdir/usr/share/licenses/$pkgname/LICENSE"
  install -m644 -D README "$pkgdir/usr/share/doc/$pkgname/README"
  install -m644 -D applied_patches.txt "$pkgdir/usr/share/doc/$pkgname/applied_patches.txt"

}

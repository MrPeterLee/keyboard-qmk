# Pascal Getreuer's QMK keymap

(This is not an officially supported Google product.)

## Installation

This repo works as an [External QMK Userspace](https://docs.qmk.fm/newbs_external_userspace). Instructions on how to use it in QMK:

1. [Set up QMK](https://msys.qmk.fm/) on Windows.

   ```sh
   qmk setup
   ```
   
3. Clone this repo locally

   ```sh
   cd /d/lab/paper/
   git clone --recursive git@github.com:MrPeterLee/keyboard-qmk.git
   ```

4. Run the following shell command, replacing "`path/to/qmk-keymap`" with the
   relative path to your clone of `qmk-keymap` from the previous step:

   ```sh
   qmk config user.overlay_dir="D:/lab/paper/keyboard-qmk"
   ```

The Voyager keymap may then be compiled and flashed with

```sh
# ZSA Voyager
cd /d/lab/paper/keyboard-qmk
qmk compile -kb zsa/voyager -km getreuer
qmk flash -kb zsa/voyager -km getreuer
```

![ZSA Voyager](doc/voyager.jpg)

This is my [Quantum Mechanical Keyboard (QMK)](https://docs.qmk.fm) keymap for
the Dactyl Ergodox, ZSA Moonlander, and ZSA Voyager keyboards. Who knew a
keyboard [could do so
much?](https://getreuer.info/posts/keyboards/tour/index.html)

## License

This repo uses the Apache License 2.0 except where otherwise indicated. See the
[LICENSE file](LICENSE.txt) for details.

## Feature libraries

Several userspace feature libraries for QMK are developed in this repo. Code is
under the [features](features/) directory and detailed documentation can be
found in the links below. For developers, see also my post [developing QMK
features](https://getreuer.info/posts/keyboards/developing-qmk-features/index.html)
for general tips on writing userspace libraries and contributing to QMK.

- [Achordion](https://getreuer.info/posts/keyboards/achordion/index.html)
  &ndash; customize the tap-hold decision

- [Custom shift
  keys](https://getreuer.info/posts/keyboards/custom-shift-keys/index.html)
  &ndash; they're surprisingly tricky to get right; here is my approach

- [keycode_string()](https://getreuer.info/posts/keyboards/keycode-string/index.html)
  &ndash; format keycodes as human-readable strings

- [Mouse Turbo
  Click](https://getreuer.info/posts/keyboards/mouse-turbo-click/index.html)
  &ndash; macro that clicks the mouse rapidly

- [Orbital
  Mouse](https://getreuer.info/posts/keyboards/orbital-mouse/index.html) &ndash;
  a polar approach to mouse key control

- [PaletteFx](https://getreuer.info/posts/keyboards/palettefx/index.html) &ndash;
  palette-based animated RGB matrix lighting effects

- [Sentence Case](https://getreuer.info/posts/keyboards/sentence-case/index.html)
  &ndash; automatically capitalize the first letter of sentences

- [SOCD Cleaner](https://getreuer.info/posts/keyboards/socd-cleaner/index.html)
  &ndash; enhance WASD for fast inputs for gaming

- [Word selection](https://getreuer.info/posts/keyboards/select-word/index.html)
  &ndash; macro for convenient word or line selection

The following were originally developed here and have since graduated to become
QMK core features. It is recommended to use the QMK core implementations, but
(perhaps for sake of customization or curiosity) you may continue to use these
userspace versions:

- [Autocorrection](https://getreuer.info/posts/keyboards/autocorrection/index.html)
  &ndash; userspace version of [QMK's
  Autocorrect](https://docs.qmk.fm/features/autocorrect)

- [Caps Word](https://getreuer.info/posts/keyboards/caps-word/index.html)
  &ndash; userspace version of [QMK's Caps
  Word](https://docs.qmk.fm/features/caps_word)

- [Layer Lock key](https://getreuer.info/posts/keyboards/layer-lock/index.html)
  &ndash; userspace version of [QMK's Layer
  Lock](https://docs.qmk.fm/features/layer_lock)

- [Repeat Key](https://getreuer.info/posts/keyboards/repeat-key/index.html)
  &ndash; userspace version of [QMK's Repeat
  Key](https://docs.qmk.fm/features/repeat_key)

## My keymap

Here is a visualization of my keymap. See the [Dactyl
keymap.c](keyboards/handwired/dactyl_promicro/keymaps/getreuer/keymap.c),
[Moonlander keymap.c](keyboards/zsa/moonlander/keymaps/getreuer/keymap.c), or
[Voyager keymap.c](keyboards/zsa/voyager/keymaps/getreuer/keymap.c) and
[getreuer.c](getreuer.c) for full details.

**Base layer** ([Magic
Sturdy](https://getreuer.info/posts/keyboards/alt-layouts/index.html#magic-sturdy) with home row mods)

![Base layer](doc/layout-0-base.png)

**Symbol layer**

![Symbol layer](doc/layout-1-symbol.png)

**Numpad layer**

![Num layer](doc/layout-2-num.png)

**Window management layer**

![Win layer](doc/layout-3-win.png)

**Funky fun layer**

![Fun layer](doc/layout-4-fun.png)

## Installation

This repo works as an [External QMK
Userspace](https://docs.qmk.fm/newbs_external_userspace). Instructions on how
to use it in QMK:

1. [Set up QMK](https://docs.qmk.fm/newbs).

2. Clone this repo locally

   ```sh
   git clone https://github.com/getreuer/qmk-keymap
   ```

3. Run the following shell command, replacing "`path/to/qmk-keymap`" with the
   relative path to your clone of `qmk-keymap` from the previous step:

   ```sh
   qmk config user.overlay_dir="$(realpath path/to/qmk-keymap)"
   ```

My keymap may then be compiled and flashed with

```sh
# Dactyl Ergodox
qmk flash -kb handwired/dactyl_promicro -km getreuer
# ZSA Moonlander
qmk flash -kb zsa/moonlander -km getreuer
# ZSA Voyager
qmk flash -kb zsa/voyager -km getreuer
```

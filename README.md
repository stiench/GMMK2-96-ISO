# Stiench setup

## Init

```bash
sudo pacman -S qmk dos2unix
yay -S wb32-dfu-updater_cli-git
qmk setup
cp -r GMMK2-96-ISO/keyboards ~/qmk_firmware/
```

## Compile
```bash
qmk compile -kb gmmk/gmmk2/p96/iso -km stiench
```

## Flash
```bash
sudo qmk flash gmmk_gmmk2_p96_iso_stiench.bin
```

```
To enter bootloader mode on the GMMK 2 for firmware flashing,
unplug the keyboard, hold down the Spacebar and B keys (or Esc key) simultaneously, and plug the USB cable back in
```

## Credits

based on [https://github.com/skitzo2000/GMMK2-96](https://github.com/skitzo2000/GMMK2-96)

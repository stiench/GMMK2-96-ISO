# Stiench setup

## Init

Download :\
https://glorious-qmk.nyc3.digitaloceanspaces.com/qmk_toolbox.exe \
https://msys.qmk.fm/

```bash
qmk setup qmk setup qmk/qmk_firmware
make git-submodule
```

## Compile
```bash
qmk compile -kb gmmk/gmmk2/p96/iso -km stiench
```

## Credits

based on [https://github.com/skitzo2000/GMMK2-96](https://github.com/skitzo2000/GMMK2-96)

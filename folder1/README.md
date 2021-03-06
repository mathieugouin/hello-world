# README.md

* test 3
* folder1


## Clear Icons Cache

When changing tvheadend channel icons, it is required to clear the cache to force Kodi to reload the new icons
```
rm $HOME/.kodi/userdata/Thumbnails/*/*.png
rm $HOME/.kodi/userdata/Database/Textures13.db
sudo reboot
```



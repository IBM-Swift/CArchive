
import PackageDescription

let package = Package(
	name: "CArchive",
	pkgConfig: "libarchive",
	providers: [
		.Brew("libarchive"), 
		.Apt("libarchive-dev")
	]
)

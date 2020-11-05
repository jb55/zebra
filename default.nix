{ pkgs ? import <nixpkgs> {} }:
pkgs.stdenv.mkDerivation {
  pname   = "zebra";
  version = "0.1";

  src = ./.;
  makeFlags = "PREFIX=$(out)";

  nativeBuildInputs = [ ];
}

{
  description = "qmk";

  inputs = {
    flake-utils.url = "github:numtide/flake-utils";
    nixpkgs.url = "github:nixos/nixpkgs/nixos-unstable";
  };

  outputs = { self, nixpkgs, flake-utils }:
    flake-utils.lib.eachDefaultSystem (system:
      let
        pkgs = import nixpkgs {
          inherit system;

          config.allowUnfree = true;
        };
      in
      with pkgs; rec {
        devShell =
          pkgs.mkShell rec {
            buildInputs = [
              nil
              llvmPackages_16.clang-unwrapped
              qmk
            ];
            shellHook = ''
            '';
          };
      });
}

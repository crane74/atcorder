FROM buildpack-deps:bullseye

# タイムゾーンを日本に設定
ENV TZ=Asia/Tokyo

# インフラの整備
RUN apt update && apt upgrade -y && \
    apt install -y gdb

# starshipの導入
RUN curl -sS https://starship.rs/install.sh | sh -s -- --yes && \
    echo eval "$(starship init bash)" >> ~/.bashrc



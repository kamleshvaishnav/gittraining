FROM alpine:latest

ENV WORKDIR /helloworld

RUN mkdir $WORKDIR
WORKDIR /helloworld/
COPY myapp /helloworld/

CMD ["/helloworld/myapp"]

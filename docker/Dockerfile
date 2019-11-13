FROM continuumio/anaconda3:5.0.1

# install sys requirements
RUN apt-get update
RUN apt-get install -y build-essential git

# clone in repo
RUN git clone https://github.com/yngtodd/crank

# update conda
RUN conda update --yes conda

# go into repo
RUN cd crank && conda env create -f crank-dev-requirements.yml

# activate
RUN echo "source activate crank-dev-requirements" > ~/.bash
ENV PATH /opt/conda/envs/crank-dev-requirements/bin:$PATH

# activate
#RUN conda activate crank-dev-requirements

# make build dir
RUN cd crank && mkdir build

# run cmake
RUN  cd crank/build && \
    cmake .. -DCMAKE_INSTALL_PREFIX=$(conda info --base)/envs/crank-dev-requirements

# build and install project
RUN cd crank/build && \
    make -j2 install
// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: ngcode.proto
// Original file comments:
// Copyright 2015 gRPC authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
#ifndef GRPC_ngcode_2eproto__INCLUDED
#define GRPC_ngcode_2eproto__INCLUDED

#include "ngcode.pb.h"

#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/method_handler_impl.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace grpc {
class CompletionQueue;
class Channel;
class ServerCompletionQueue;
class ServerContext;
}  // namespace grpc

namespace ngcode {

// The greeting service definition.
class Greeter final {
 public:
  static constexpr char const* service_full_name() {
    return "ngcode.Greeter";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    // Sends a greeting
    virtual ::grpc::Status AmfAusfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfAusfRequest& request, ::ngcode::AmfAusfReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfAusfReply>> AsyncAmfAusfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfAusfRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfAusfReply>>(AsyncAmfAusfInteractionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfAusfReply>> PrepareAsyncAmfAusfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfAusfRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfAusfReply>>(PrepareAsyncAmfAusfInteractionRaw(context, request, cq));
    }
    virtual ::grpc::Status AmfSmfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfSmfRequest& request, ::ngcode::AmfSmfReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfSmfReply>> AsyncAmfSmfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfSmfRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfSmfReply>>(AsyncAmfSmfInteractionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfSmfReply>> PrepareAsyncAmfSmfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfSmfRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfSmfReply>>(PrepareAsyncAmfSmfInteractionRaw(context, request, cq));
    }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfAusfReply>* AsyncAmfAusfInteractionRaw(::grpc::ClientContext* context, const ::ngcode::AmfAusfRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfAusfReply>* PrepareAsyncAmfAusfInteractionRaw(::grpc::ClientContext* context, const ::ngcode::AmfAusfRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfSmfReply>* AsyncAmfSmfInteractionRaw(::grpc::ClientContext* context, const ::ngcode::AmfSmfRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::ngcode::AmfSmfReply>* PrepareAsyncAmfSmfInteractionRaw(::grpc::ClientContext* context, const ::ngcode::AmfSmfRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status AmfAusfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfAusfRequest& request, ::ngcode::AmfAusfReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ngcode::AmfAusfReply>> AsyncAmfAusfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfAusfRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ngcode::AmfAusfReply>>(AsyncAmfAusfInteractionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ngcode::AmfAusfReply>> PrepareAsyncAmfAusfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfAusfRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ngcode::AmfAusfReply>>(PrepareAsyncAmfAusfInteractionRaw(context, request, cq));
    }
    ::grpc::Status AmfSmfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfSmfRequest& request, ::ngcode::AmfSmfReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ngcode::AmfSmfReply>> AsyncAmfSmfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfSmfRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ngcode::AmfSmfReply>>(AsyncAmfSmfInteractionRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ngcode::AmfSmfReply>> PrepareAsyncAmfSmfInteraction(::grpc::ClientContext* context, const ::ngcode::AmfSmfRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::ngcode::AmfSmfReply>>(PrepareAsyncAmfSmfInteractionRaw(context, request, cq));
    }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    ::grpc::ClientAsyncResponseReader< ::ngcode::AmfAusfReply>* AsyncAmfAusfInteractionRaw(::grpc::ClientContext* context, const ::ngcode::AmfAusfRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ngcode::AmfAusfReply>* PrepareAsyncAmfAusfInteractionRaw(::grpc::ClientContext* context, const ::ngcode::AmfAusfRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ngcode::AmfSmfReply>* AsyncAmfSmfInteractionRaw(::grpc::ClientContext* context, const ::ngcode::AmfSmfRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::ngcode::AmfSmfReply>* PrepareAsyncAmfSmfInteractionRaw(::grpc::ClientContext* context, const ::ngcode::AmfSmfRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_AmfAusfInteraction_;
    const ::grpc::internal::RpcMethod rpcmethod_AmfSmfInteraction_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    // Sends a greeting
    virtual ::grpc::Status AmfAusfInteraction(::grpc::ServerContext* context, const ::ngcode::AmfAusfRequest* request, ::ngcode::AmfAusfReply* response);
    virtual ::grpc::Status AmfSmfInteraction(::grpc::ServerContext* context, const ::ngcode::AmfSmfRequest* request, ::ngcode::AmfSmfReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_AmfAusfInteraction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AmfAusfInteraction() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_AmfAusfInteraction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AmfAusfInteraction(::grpc::ServerContext* context, const ::ngcode::AmfAusfRequest* request, ::ngcode::AmfAusfReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAmfAusfInteraction(::grpc::ServerContext* context, ::ngcode::AmfAusfRequest* request, ::grpc::ServerAsyncResponseWriter< ::ngcode::AmfAusfReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class WithAsyncMethod_AmfSmfInteraction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithAsyncMethod_AmfSmfInteraction() {
      ::grpc::Service::MarkMethodAsync(1);
    }
    ~WithAsyncMethod_AmfSmfInteraction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AmfSmfInteraction(::grpc::ServerContext* context, const ::ngcode::AmfSmfRequest* request, ::ngcode::AmfSmfReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestAmfSmfInteraction(::grpc::ServerContext* context, ::ngcode::AmfSmfRequest* request, ::grpc::ServerAsyncResponseWriter< ::ngcode::AmfSmfReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(1, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_AmfAusfInteraction<WithAsyncMethod_AmfSmfInteraction<Service > > AsyncService;
  template <class BaseClass>
  class WithGenericMethod_AmfAusfInteraction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AmfAusfInteraction() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_AmfAusfInteraction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AmfAusfInteraction(::grpc::ServerContext* context, const ::ngcode::AmfAusfRequest* request, ::ngcode::AmfAusfReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithGenericMethod_AmfSmfInteraction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithGenericMethod_AmfSmfInteraction() {
      ::grpc::Service::MarkMethodGeneric(1);
    }
    ~WithGenericMethod_AmfSmfInteraction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status AmfSmfInteraction(::grpc::ServerContext* context, const ::ngcode::AmfSmfRequest* request, ::ngcode::AmfSmfReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AmfAusfInteraction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AmfAusfInteraction() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler< ::ngcode::AmfAusfRequest, ::ngcode::AmfAusfReply>(std::bind(&WithStreamedUnaryMethod_AmfAusfInteraction<BaseClass>::StreamedAmfAusfInteraction, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AmfAusfInteraction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AmfAusfInteraction(::grpc::ServerContext* context, const ::ngcode::AmfAusfRequest* request, ::ngcode::AmfAusfReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAmfAusfInteraction(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ngcode::AmfAusfRequest,::ngcode::AmfAusfReply>* server_unary_streamer) = 0;
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_AmfSmfInteraction : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service *service) {}
   public:
    WithStreamedUnaryMethod_AmfSmfInteraction() {
      ::grpc::Service::MarkMethodStreamed(1,
        new ::grpc::internal::StreamedUnaryHandler< ::ngcode::AmfSmfRequest, ::ngcode::AmfSmfReply>(std::bind(&WithStreamedUnaryMethod_AmfSmfInteraction<BaseClass>::StreamedAmfSmfInteraction, this, std::placeholders::_1, std::placeholders::_2)));
    }
    ~WithStreamedUnaryMethod_AmfSmfInteraction() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status AmfSmfInteraction(::grpc::ServerContext* context, const ::ngcode::AmfSmfRequest* request, ::ngcode::AmfSmfReply* response) final override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedAmfSmfInteraction(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::ngcode::AmfSmfRequest,::ngcode::AmfSmfReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_AmfAusfInteraction<WithStreamedUnaryMethod_AmfSmfInteraction<Service > > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_AmfAusfInteraction<WithStreamedUnaryMethod_AmfSmfInteraction<Service > > StreamedService;
};

}  // namespace ngcode


#endif  // GRPC_ngcode_2eproto__INCLUDED

﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/kinesisanalytics/KinesisAnalytics_EXPORTS.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/client/AWSClientAsyncCRTP.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesisanalytics/KinesisAnalyticsServiceClientModel.h>

namespace Aws
{
namespace KinesisAnalytics
{
  /**
   * <fullname>Amazon Kinesis Analytics</fullname> <p> <b>Overview</b> </p> 
   * <p>This documentation is for version 1 of the Amazon Kinesis Data Analytics API,
   * which only supports SQL applications. Version 2 of the API supports SQL and Java
   * applications. For more information about version 2, see <a
   * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
   * API V2 Documentation</a>.</p>  <p>This is the <i>Amazon Kinesis Analytics
   * v1 API Reference</i>. The Amazon Kinesis Analytics Developer Guide provides
   * additional information. </p>
   */
  class AWS_KINESISANALYTICS_API KinesisAnalyticsClient : public Aws::Client::AWSJsonClient, public Aws::Client::ClientWithAsyncTemplateMethods<KinesisAnalyticsClient>
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;
      static const char* SERVICE_NAME;
      static const char* ALLOCATION_TAG;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsClient(const Aws::KinesisAnalytics::KinesisAnalyticsClientConfiguration& clientConfiguration = Aws::KinesisAnalytics::KinesisAnalyticsClientConfiguration(),
                               std::shared_ptr<KinesisAnalyticsEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisAnalyticsEndpointProvider>(ALLOCATION_TAG));

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsClient(const Aws::Auth::AWSCredentials& credentials,
                               std::shared_ptr<KinesisAnalyticsEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisAnalyticsEndpointProvider>(ALLOCATION_TAG),
                               const Aws::KinesisAnalytics::KinesisAnalyticsClientConfiguration& clientConfiguration = Aws::KinesisAnalytics::KinesisAnalyticsClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               std::shared_ptr<KinesisAnalyticsEndpointProviderBase> endpointProvider = Aws::MakeShared<KinesisAnalyticsEndpointProvider>(ALLOCATION_TAG),
                               const Aws::KinesisAnalytics::KinesisAnalyticsClientConfiguration& clientConfiguration = Aws::KinesisAnalytics::KinesisAnalyticsClientConfiguration());


        /* Legacy constructors due deprecation */
       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsClient(const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        KinesisAnalyticsClient(const Aws::Auth::AWSCredentials& credentials,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        KinesisAnalyticsClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
                               const Aws::Client::ClientConfiguration& clientConfiguration);

        /* End of legacy constructors due deprecation */
        virtual ~KinesisAnalyticsClient();

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Adds a CloudWatch log stream to monitor
         * application configuration errors. For more information about using CloudWatch
         * log streams with Amazon Kinesis Analytics applications, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
         * with Amazon CloudWatch Logs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationCloudWatchLoggingOptionOutcome AddApplicationCloudWatchLoggingOption(const Model::AddApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * A Callable wrapper for AddApplicationCloudWatchLoggingOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationCloudWatchLoggingOptionRequestT = Model::AddApplicationCloudWatchLoggingOptionRequest>
        Model::AddApplicationCloudWatchLoggingOptionOutcomeCallable AddApplicationCloudWatchLoggingOptionCallable(const AddApplicationCloudWatchLoggingOptionRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::AddApplicationCloudWatchLoggingOption, request);
        }

        /**
         * An Async wrapper for AddApplicationCloudWatchLoggingOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationCloudWatchLoggingOptionRequestT = Model::AddApplicationCloudWatchLoggingOptionRequest>
        void AddApplicationCloudWatchLoggingOptionAsync(const AddApplicationCloudWatchLoggingOptionRequestT& request, const AddApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::AddApplicationCloudWatchLoggingOption, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p> Adds a streaming source to your Amazon
         * Kinesis application. For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. </p> <p>You can add a streaming source either when you
         * create an application or you can use this operation to add a streaming source
         * after you create an application. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_CreateApplication.html">CreateApplication</a>.</p>
         * <p>Any configuration update, including adding a streaming source using this
         * operation, results in a new version of the application. You can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the current application version. </p> <p>This operation
         * requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationInput</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationInput">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationInputOutcome AddApplicationInput(const Model::AddApplicationInputRequest& request) const;

        /**
         * A Callable wrapper for AddApplicationInput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationInputRequestT = Model::AddApplicationInputRequest>
        Model::AddApplicationInputOutcomeCallable AddApplicationInputCallable(const AddApplicationInputRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::AddApplicationInput, request);
        }

        /**
         * An Async wrapper for AddApplicationInput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationInputRequestT = Model::AddApplicationInputRequest>
        void AddApplicationInputAsync(const AddApplicationInputRequestT& request, const AddApplicationInputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::AddApplicationInput, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Adds an <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
         * to an application. An input processor preprocesses records on the input stream
         * before the application's SQL code executes. Currently, the only input processor
         * available is <a href="https://docs.aws.amazon.com/lambda/">AWS
         * Lambda</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationInputProcessingConfigurationOutcome AddApplicationInputProcessingConfiguration(const Model::AddApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for AddApplicationInputProcessingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationInputProcessingConfigurationRequestT = Model::AddApplicationInputProcessingConfigurationRequest>
        Model::AddApplicationInputProcessingConfigurationOutcomeCallable AddApplicationInputProcessingConfigurationCallable(const AddApplicationInputProcessingConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::AddApplicationInputProcessingConfiguration, request);
        }

        /**
         * An Async wrapper for AddApplicationInputProcessingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationInputProcessingConfigurationRequestT = Model::AddApplicationInputProcessingConfigurationRequest>
        void AddApplicationInputProcessingConfigurationAsync(const AddApplicationInputProcessingConfigurationRequestT& request, const AddApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::AddApplicationInputProcessingConfiguration, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Adds an external destination to your
         * Amazon Kinesis Analytics application.</p> <p>If you want Amazon Kinesis
         * Analytics to deliver data from an in-application stream within your application
         * to an external destination (such as an Amazon Kinesis stream, an Amazon Kinesis
         * Firehose delivery stream, or an AWS Lambda function), you add the relevant
         * configuration to your application using this operation. You can configure one or
         * more outputs for your application. Each output configuration maps an
         * in-application stream and an external destination.</p> <p> You can use one of
         * the output configurations to deliver data from your in-application error stream
         * to an external destination so that you can analyze the errors. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-output.html">Understanding
         * Application Output (Destination)</a>. </p> <p> Any configuration update,
         * including adding a streaming source using this operation, results in a new
         * version of the application. You can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the current application version.</p> <p>For the limits on the
         * number of application inputs and outputs you can configure, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationOutputOutcome AddApplicationOutput(const Model::AddApplicationOutputRequest& request) const;

        /**
         * A Callable wrapper for AddApplicationOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationOutputRequestT = Model::AddApplicationOutputRequest>
        Model::AddApplicationOutputOutcomeCallable AddApplicationOutputCallable(const AddApplicationOutputRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::AddApplicationOutput, request);
        }

        /**
         * An Async wrapper for AddApplicationOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationOutputRequestT = Model::AddApplicationOutputRequest>
        void AddApplicationOutputAsync(const AddApplicationOutputRequestT& request, const AddApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::AddApplicationOutput, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Adds a reference data source to an
         * existing application.</p> <p>Amazon Kinesis Analytics reads reference data (that
         * is, an Amazon S3 object) and creates an in-application table within your
         * application. In the request, you provide the source (S3 bucket name and object
         * key name), name of the in-application table to create, and the necessary mapping
         * information that describes how data in Amazon S3 object maps to columns in the
         * resulting in-application table.</p> <p> For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. For the limits on data sources you can add to your
         * application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/limits.html">Limits</a>.
         * </p> <p> This operation requires permissions to perform the
         * <code>kinesisanalytics:AddApplicationOutput</code> action. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/AddApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::AddApplicationReferenceDataSourceOutcome AddApplicationReferenceDataSource(const Model::AddApplicationReferenceDataSourceRequest& request) const;

        /**
         * A Callable wrapper for AddApplicationReferenceDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename AddApplicationReferenceDataSourceRequestT = Model::AddApplicationReferenceDataSourceRequest>
        Model::AddApplicationReferenceDataSourceOutcomeCallable AddApplicationReferenceDataSourceCallable(const AddApplicationReferenceDataSourceRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::AddApplicationReferenceDataSource, request);
        }

        /**
         * An Async wrapper for AddApplicationReferenceDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename AddApplicationReferenceDataSourceRequestT = Model::AddApplicationReferenceDataSourceRequest>
        void AddApplicationReferenceDataSourceAsync(const AddApplicationReferenceDataSourceRequestT& request, const AddApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::AddApplicationReferenceDataSource, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p> Creates an Amazon Kinesis Analytics
         * application. You can configure each application with one streaming source as
         * input, application code to process the input, and up to three destinations where
         * you want Amazon Kinesis Analytics to write the output data from your
         * application. For an overview, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works.html">How
         * it Works</a>. </p> <p>In the input configuration, you map the streaming source
         * to an in-application stream, which you can think of as a constantly updating
         * table. In the mapping, you must provide a schema for the in-application stream
         * and map each data column in the in-application stream to a data element in the
         * streaming source.</p> <p>Your application code is one or more SQL statements
         * that read input data, transform it, and generate output. Your application code
         * can create one or more SQL artifacts like SQL streams or pumps.</p> <p>In the
         * output configuration, you can configure the application to write data from
         * in-application streams created in your applications to up to three
         * destinations.</p> <p> To read data from your source stream or write data to
         * destination streams, Amazon Kinesis Analytics needs your permissions. You grant
         * these permissions by creating IAM roles. This operation requires permissions to
         * perform the <code>kinesisanalytics:CreateApplication</code> action. </p> <p> For
         * introductory exercises to create an Amazon Kinesis Analytics application, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/getting-started.html">Getting
         * Started</a>. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/CreateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateApplicationOutcome CreateApplication(const Model::CreateApplicationRequest& request) const;

        /**
         * A Callable wrapper for CreateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        Model::CreateApplicationOutcomeCallable CreateApplicationCallable(const CreateApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::CreateApplication, request);
        }

        /**
         * An Async wrapper for CreateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename CreateApplicationRequestT = Model::CreateApplicationRequest>
        void CreateApplicationAsync(const CreateApplicationRequestT& request, const CreateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::CreateApplication, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Deletes the specified application.
         * Amazon Kinesis Analytics halts application execution and deletes the
         * application, including any application artifacts (such as in-application
         * streams, reference table, and application code).</p> <p>This operation requires
         * permissions to perform the <code>kinesisanalytics:DeleteApplication</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutcome DeleteApplication(const Model::DeleteApplicationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        Model::DeleteApplicationOutcomeCallable DeleteApplicationCallable(const DeleteApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::DeleteApplication, request);
        }

        /**
         * An Async wrapper for DeleteApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationRequestT = Model::DeleteApplicationRequest>
        void DeleteApplicationAsync(const DeleteApplicationRequestT& request, const DeleteApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::DeleteApplication, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Deletes a CloudWatch log stream from an
         * application. For more information about using CloudWatch log streams with Amazon
         * Kinesis Analytics applications, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/cloudwatch-logs.html">Working
         * with Amazon CloudWatch Logs</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationCloudWatchLoggingOption">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationCloudWatchLoggingOptionOutcome DeleteApplicationCloudWatchLoggingOption(const Model::DeleteApplicationCloudWatchLoggingOptionRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationCloudWatchLoggingOption that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationCloudWatchLoggingOptionRequestT = Model::DeleteApplicationCloudWatchLoggingOptionRequest>
        Model::DeleteApplicationCloudWatchLoggingOptionOutcomeCallable DeleteApplicationCloudWatchLoggingOptionCallable(const DeleteApplicationCloudWatchLoggingOptionRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::DeleteApplicationCloudWatchLoggingOption, request);
        }

        /**
         * An Async wrapper for DeleteApplicationCloudWatchLoggingOption that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationCloudWatchLoggingOptionRequestT = Model::DeleteApplicationCloudWatchLoggingOptionRequest>
        void DeleteApplicationCloudWatchLoggingOptionAsync(const DeleteApplicationCloudWatchLoggingOptionRequestT& request, const DeleteApplicationCloudWatchLoggingOptionResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::DeleteApplicationCloudWatchLoggingOption, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Deletes an <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_InputProcessingConfiguration.html">InputProcessingConfiguration</a>
         * from an input.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationInputProcessingConfiguration">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationInputProcessingConfigurationOutcome DeleteApplicationInputProcessingConfiguration(const Model::DeleteApplicationInputProcessingConfigurationRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationInputProcessingConfiguration that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationInputProcessingConfigurationRequestT = Model::DeleteApplicationInputProcessingConfigurationRequest>
        Model::DeleteApplicationInputProcessingConfigurationOutcomeCallable DeleteApplicationInputProcessingConfigurationCallable(const DeleteApplicationInputProcessingConfigurationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::DeleteApplicationInputProcessingConfiguration, request);
        }

        /**
         * An Async wrapper for DeleteApplicationInputProcessingConfiguration that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationInputProcessingConfigurationRequestT = Model::DeleteApplicationInputProcessingConfigurationRequest>
        void DeleteApplicationInputProcessingConfigurationAsync(const DeleteApplicationInputProcessingConfigurationRequestT& request, const DeleteApplicationInputProcessingConfigurationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::DeleteApplicationInputProcessingConfiguration, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Deletes output destination
         * configuration from your application configuration. Amazon Kinesis Analytics will
         * no longer write data from the corresponding in-application stream to the
         * external output destination.</p> <p>This operation requires permissions to
         * perform the <code>kinesisanalytics:DeleteApplicationOutput</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationOutput">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationOutputOutcome DeleteApplicationOutput(const Model::DeleteApplicationOutputRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationOutput that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationOutputRequestT = Model::DeleteApplicationOutputRequest>
        Model::DeleteApplicationOutputOutcomeCallable DeleteApplicationOutputCallable(const DeleteApplicationOutputRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::DeleteApplicationOutput, request);
        }

        /**
         * An Async wrapper for DeleteApplicationOutput that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationOutputRequestT = Model::DeleteApplicationOutputRequest>
        void DeleteApplicationOutputAsync(const DeleteApplicationOutputRequestT& request, const DeleteApplicationOutputResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::DeleteApplicationOutput, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Deletes a reference data source
         * configuration from the specified application configuration.</p> <p>If the
         * application is running, Amazon Kinesis Analytics immediately removes the
         * in-application table that you created using the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_AddApplicationReferenceDataSource.html">AddApplicationReferenceDataSource</a>
         * operation. </p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics.DeleteApplicationReferenceDataSource</code>
         * action.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DeleteApplicationReferenceDataSource">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteApplicationReferenceDataSourceOutcome DeleteApplicationReferenceDataSource(const Model::DeleteApplicationReferenceDataSourceRequest& request) const;

        /**
         * A Callable wrapper for DeleteApplicationReferenceDataSource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DeleteApplicationReferenceDataSourceRequestT = Model::DeleteApplicationReferenceDataSourceRequest>
        Model::DeleteApplicationReferenceDataSourceOutcomeCallable DeleteApplicationReferenceDataSourceCallable(const DeleteApplicationReferenceDataSourceRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::DeleteApplicationReferenceDataSource, request);
        }

        /**
         * An Async wrapper for DeleteApplicationReferenceDataSource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DeleteApplicationReferenceDataSourceRequestT = Model::DeleteApplicationReferenceDataSourceRequest>
        void DeleteApplicationReferenceDataSourceAsync(const DeleteApplicationReferenceDataSourceRequestT& request, const DeleteApplicationReferenceDataSourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::DeleteApplicationReferenceDataSource, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Returns information about a specific
         * Amazon Kinesis Analytics application.</p> <p>If you want to retrieve a list of
         * all applications in your account, use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_ListApplications.html">ListApplications</a>
         * operation.</p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:DescribeApplication</code> action. You can use
         * <code>DescribeApplication</code> to get the current application versionId, which
         * you need to call other operations such as <code>Update</code>. </p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DescribeApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeApplicationOutcome DescribeApplication(const Model::DescribeApplicationRequest& request) const;

        /**
         * A Callable wrapper for DescribeApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
        Model::DescribeApplicationOutcomeCallable DescribeApplicationCallable(const DescribeApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::DescribeApplication, request);
        }

        /**
         * An Async wrapper for DescribeApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DescribeApplicationRequestT = Model::DescribeApplicationRequest>
        void DescribeApplicationAsync(const DescribeApplicationRequestT& request, const DescribeApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::DescribeApplication, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Infers a schema by evaluating sample
         * records on the specified streaming source (Amazon Kinesis stream or Amazon
         * Kinesis Firehose delivery stream) or S3 object. In the response, the operation
         * returns the inferred schema and also the sample records that the operation used
         * to infer the schema.</p> <p> You can use the inferred schema when configuring a
         * streaming source for your application. For conceptual information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-it-works-input.html">Configuring
         * Application Input</a>. Note that when you create an application using the Amazon
         * Kinesis Analytics console, the console uses this operation to infer a schema and
         * show it in the console user interface. </p> <p> This operation requires
         * permissions to perform the <code>kinesisanalytics:DiscoverInputSchema</code>
         * action. </p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/DiscoverInputSchema">AWS
         * API Reference</a></p>
         */
        virtual Model::DiscoverInputSchemaOutcome DiscoverInputSchema(const Model::DiscoverInputSchemaRequest& request) const;

        /**
         * A Callable wrapper for DiscoverInputSchema that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename DiscoverInputSchemaRequestT = Model::DiscoverInputSchemaRequest>
        Model::DiscoverInputSchemaOutcomeCallable DiscoverInputSchemaCallable(const DiscoverInputSchemaRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::DiscoverInputSchema, request);
        }

        /**
         * An Async wrapper for DiscoverInputSchema that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename DiscoverInputSchemaRequestT = Model::DiscoverInputSchemaRequest>
        void DiscoverInputSchemaAsync(const DiscoverInputSchemaRequestT& request, const DiscoverInputSchemaResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::DiscoverInputSchema, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Returns a list of Amazon Kinesis
         * Analytics applications in your account. For each application, the response
         * includes the application name, Amazon Resource Name (ARN), and status. If the
         * response returns the <code>HasMoreApplications</code> value as true, you can
         * send another request by adding the <code>ExclusiveStartApplicationName</code> in
         * the request body, and set the value of this to the last application name from
         * the previous response. </p> <p>If you want detailed information about a specific
         * application, use <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>.</p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:ListApplications</code> action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ListApplications">AWS
         * API Reference</a></p>
         */
        virtual Model::ListApplicationsOutcome ListApplications(const Model::ListApplicationsRequest& request) const;

        /**
         * A Callable wrapper for ListApplications that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        Model::ListApplicationsOutcomeCallable ListApplicationsCallable(const ListApplicationsRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::ListApplications, request);
        }

        /**
         * An Async wrapper for ListApplications that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListApplicationsRequestT = Model::ListApplicationsRequest>
        void ListApplicationsAsync(const ListApplicationsRequestT& request, const ListApplicationsResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::ListApplications, request, handler, context);
        }

        /**
         * <p>Retrieves the list of key-value tags assigned to the application. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/ListTagsForResource">AWS
         * API Reference</a></p>
         */
        virtual Model::ListTagsForResourceOutcome ListTagsForResource(const Model::ListTagsForResourceRequest& request) const;

        /**
         * A Callable wrapper for ListTagsForResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        Model::ListTagsForResourceOutcomeCallable ListTagsForResourceCallable(const ListTagsForResourceRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::ListTagsForResource, request);
        }

        /**
         * An Async wrapper for ListTagsForResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename ListTagsForResourceRequestT = Model::ListTagsForResourceRequest>
        void ListTagsForResourceAsync(const ListTagsForResourceRequestT& request, const ListTagsForResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::ListTagsForResource, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Starts the specified Amazon Kinesis
         * Analytics application. After creating an application, you must exclusively call
         * this operation to start your application.</p> <p>After the application starts,
         * it begins consuming the input data, processes it, and writes the output to the
         * configured destination.</p> <p> The application status must be
         * <code>READY</code> for you to start an application. You can get the application
         * status in the console or using the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation.</p> <p>After you start the application, you can stop the application
         * from processing the input by calling the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_StopApplication.html">StopApplication</a>
         * operation.</p> <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StartApplication</code> action.</p><p><h3>See Also:</h3> 
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/StartApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StartApplicationOutcome StartApplication(const Model::StartApplicationRequest& request) const;

        /**
         * A Callable wrapper for StartApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StartApplicationRequestT = Model::StartApplicationRequest>
        Model::StartApplicationOutcomeCallable StartApplicationCallable(const StartApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::StartApplication, request);
        }

        /**
         * An Async wrapper for StartApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StartApplicationRequestT = Model::StartApplicationRequest>
        void StartApplicationAsync(const StartApplicationRequestT& request, const StartApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::StartApplication, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Stops the application from processing
         * input data. You can stop an application only if it is in the running state. You
         * can use the <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/API_DescribeApplication.html">DescribeApplication</a>
         * operation to find the application state. After the application is stopped,
         * Amazon Kinesis Analytics stops reading data from the input, the application
         * stops processing data, and there is no output written to the destination. </p>
         * <p>This operation requires permissions to perform the
         * <code>kinesisanalytics:StopApplication</code> action.</p><p><h3>See Also:</h3>  
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/StopApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::StopApplicationOutcome StopApplication(const Model::StopApplicationRequest& request) const;

        /**
         * A Callable wrapper for StopApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename StopApplicationRequestT = Model::StopApplicationRequest>
        Model::StopApplicationOutcomeCallable StopApplicationCallable(const StopApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::StopApplication, request);
        }

        /**
         * An Async wrapper for StopApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename StopApplicationRequestT = Model::StopApplicationRequest>
        void StopApplicationAsync(const StopApplicationRequestT& request, const StopApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::StopApplication, request, handler, context);
        }

        /**
         * <p>Adds one or more key-value tags to a Kinesis Analytics application. Note that
         * the maximum number of application tags includes system tags. The maximum number
         * of user-defined application tags is 50. For more information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/TagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::TagResourceOutcome TagResource(const Model::TagResourceRequest& request) const;

        /**
         * A Callable wrapper for TagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        Model::TagResourceOutcomeCallable TagResourceCallable(const TagResourceRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::TagResource, request);
        }

        /**
         * An Async wrapper for TagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename TagResourceRequestT = Model::TagResourceRequest>
        void TagResourceAsync(const TagResourceRequestT& request, const TagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::TagResource, request, handler, context);
        }

        /**
         * <p>Removes one or more tags from a Kinesis Analytics application. For more
         * information, see <a
         * href="https://docs.aws.amazon.com/kinesisanalytics/latest/dev/how-tagging.html">Using
         * Tagging</a>.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/UntagResource">AWS
         * API Reference</a></p>
         */
        virtual Model::UntagResourceOutcome UntagResource(const Model::UntagResourceRequest& request) const;

        /**
         * A Callable wrapper for UntagResource that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        Model::UntagResourceOutcomeCallable UntagResourceCallable(const UntagResourceRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::UntagResource, request);
        }

        /**
         * An Async wrapper for UntagResource that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UntagResourceRequestT = Model::UntagResourceRequest>
        void UntagResourceAsync(const UntagResourceRequestT& request, const UntagResourceResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::UntagResource, request, handler, context);
        }

        /**
         *  <p>This documentation is for version 1 of the Amazon Kinesis Data
         * Analytics API, which only supports SQL applications. Version 2 of the API
         * supports SQL and Java applications. For more information about version 2, see <a
         * href="/kinesisanalytics/latest/apiv2/Welcome.html">Amazon Kinesis Data Analytics
         * API V2 Documentation</a>.</p>  <p>Updates an existing Amazon Kinesis
         * Analytics application. Using this API, you can update application code, input
         * configuration, and output configuration. </p> <p>Note that Amazon Kinesis
         * Analytics updates the <code>CurrentApplicationVersionId</code> each time you
         * update your application. </p> <p>This operation requires permission for the
         * <code>kinesisanalytics:UpdateApplication</code> action.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/kinesisanalytics-2015-08-14/UpdateApplication">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateApplicationOutcome UpdateApplication(const Model::UpdateApplicationRequest& request) const;

        /**
         * A Callable wrapper for UpdateApplication that returns a future to the operation so that it can be executed in parallel to other requests.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        Model::UpdateApplicationOutcomeCallable UpdateApplicationCallable(const UpdateApplicationRequestT& request) const
        {
            return SubmitCallable(&KinesisAnalyticsClient::UpdateApplication, request);
        }

        /**
         * An Async wrapper for UpdateApplication that queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        template<typename UpdateApplicationRequestT = Model::UpdateApplicationRequest>
        void UpdateApplicationAsync(const UpdateApplicationRequestT& request, const UpdateApplicationResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const
        {
            return SubmitAsync(&KinesisAnalyticsClient::UpdateApplication, request, handler, context);
        }


      void OverrideEndpoint(const Aws::String& endpoint);
      std::shared_ptr<KinesisAnalyticsEndpointProviderBase>& accessEndpointProvider();
    private:
      friend class Aws::Client::ClientWithAsyncTemplateMethods<KinesisAnalyticsClient>;
      void init(const KinesisAnalyticsClientConfiguration& clientConfiguration);

      KinesisAnalyticsClientConfiguration m_clientConfiguration;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
      std::shared_ptr<KinesisAnalyticsEndpointProviderBase> m_endpointProvider;
  };

} // namespace KinesisAnalytics
} // namespace Aws
